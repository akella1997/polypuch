$(EXAMPLE_7_NAME): index.o
	$(CC) $(CC_FLAGS) -o $@ \
	../../../../src/examples/GeneralSegmentsAndBeam/index.o \
	-L../../../../src/libs/Render -l$(RENDER_LIB_SHORT_NAME) \
	-L../../../../src/libs/Polygon -l$(POLYGON_LIB_SHORT_NAME) \
	-L../../../../src/libs/Segments -l$(SEGMENTS_LIB_SHORT_NAME) \
	-L../../../../src/libs/SDL -l$(DRAW_LIB_SHORT_NAME) \
	$(SDL_LIBS)

	$(STRIP) $@

index.o:
	$(MAKE) -C ../../../../src/examples/GeneralSegmentsAndBeam index.o

clean:
	$(CLEAN) $(EXAMPLE_7_NAME)