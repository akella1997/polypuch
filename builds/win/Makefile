export CC = g++
export CC_FLAGS = -O3 -g
export AR = ar rvs
export UNAR = ar xv
export BUILD_DIR = builds/win
export SDL_CFLAGS = `C:/MinGW/msys/1.0/local/bin/sdl-config --cflags`
export SDL_LIBS = `C:/MinGW/msys/1.0/local/bin/sdl-config --libs` -lSDL_image -lboost_math_tr1-mgw45-mt-1_44
export STRIP = \#strip
export CP = cp
export CLEAN = rm -f

export DRAW_LIB_NAME = libsdldrawutils.a
export DRAW_LIB_SHORT_NAME = sdldrawutils

export POLYGON_LIB_NAME = libsdlpolygon.a
export POLYGON_LIB_SHORT_NAME = sdlpolygon

export RENDER_LIB_NAME = libsdlrender.a
export RENDER_LIB_SHORT_NAME = sdlrender

export SEGMENTS_LIB_NAME = libsdlsegments.a
export SEGMENTS_LIB_SHORT_NAME = sdlsegments

export CURVE_LIB_NAME = libsdlcurve.a
export CURVE_LIB_SHORT_NAME = sdlcurve

export CURVES_LIB_NAME = libsdlcurves.a
export CURVES_LIB_SHORT_NAME = sdlcurves

export EXAMPLE_1_NAME = simplePointAdder.exe
export EXAMPLE_2_NAME = simplePointConstructor.exe
export EXAMPLE_3_NAME = simplePointInside.exe
export EXAMPLE_4_NAME = convexPointConstructor.exe
export EXAMPLE_5_NAME = convexPointAdder.exe
export EXAMPLE_6_NAME = convexPointInside.exe
export EXAMPLE_7_NAME = generalSegmentsAndBeam.exe
export EXAMPLE_8_NAME = simpleSegmentsAndBeam.exe
export EXAMPLE_9_NAME = generalPointInside.exe
export EXAMPLE_10_NAME = generalCurvesGeneral.exe
export EXAMPLE_11_NAME = generalCurvesErmit.exe
export EXAMPLE_12_NAME = convexPointConstructorJarvis.exe
export EXAMPLE_13_NAME = convexIntersect.exe
export EXAMPLE_14_NAME = generalCurvesBezier.exe
export EXAMPLE_15_NAME = generalCurvesBezierFire.exe
export EXAMPLE_16_NAME = convexPointConstructorHoare.exe

all: $(EXAMPLE_1_NAME) $(EXAMPLE_2_NAME) $(EXAMPLE_3_NAME) $(EXAMPLE_4_NAME) $(EXAMPLE_5_NAME) $(EXAMPLE_6_NAME) $(EXAMPLE_7_NAME) $(EXAMPLE_8_NAME) $(EXAMPLE_9_NAME) $(EXAMPLE_10_NAME) $(EXAMPLE_11_NAME) $(EXAMPLE_12_NAME) $(EXAMPLE_13_NAME) $(EXAMPLE_14_NAME) $(EXAMPLE_15_NAME) $(EXAMPLE_16_NAME)
	@echo "success"

$(EXAMPLE_1_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_1_NAME)

$(EXAMPLE_2_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_2_NAME)

$(EXAMPLE_3_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_3_NAME)

$(EXAMPLE_4_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_4_NAME)

$(EXAMPLE_5_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_5_NAME)

$(EXAMPLE_6_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_6_NAME)

$(EXAMPLE_7_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_7_NAME)

$(EXAMPLE_8_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_8_NAME)

$(EXAMPLE_9_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_9_NAME)

$(EXAMPLE_10_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME) $(CURVE_LIB_NAME) $(CURVES_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_10_NAME)

$(EXAMPLE_11_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME) $(CURVE_LIB_NAME) $(CURVES_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_11_NAME)

$(EXAMPLE_12_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_12_NAME)

$(EXAMPLE_13_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_13_NAME)

$(EXAMPLE_14_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME) $(CURVE_LIB_NAME) $(CURVES_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_14_NAME)

$(EXAMPLE_15_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME) $(CURVE_LIB_NAME) $(CURVES_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_15_NAME)

$(EXAMPLE_16_NAME): $(POLYGON_LIB_NAME) $(DRAW_LIB_NAME) $(RENDER_LIB_NAME) $(SEGMENTS_LIB_NAME)
	$(MAKE) -C examples $(EXAMPLE_16_NAME)

$(POLYGON_LIB_NAME):
	$(MAKE) -C ../../src/libs $(POLYGON_LIB_NAME)

$(DRAW_LIB_NAME):
	$(MAKE) -C ../../src/libs $(DRAW_LIB_NAME)

$(RENDER_LIB_NAME):
	$(MAKE) -C ../../src/libs $(RENDER_LIB_NAME)

$(SEGMENTS_LIB_NAME):
	$(MAKE) -C ../../src/libs $(SEGMENTS_LIB_NAME)

$(CURVE_LIB_NAME):
	$(MAKE) -C ../../src/libs $(CURVE_LIB_NAME)

$(CURVES_LIB_NAME):
	$(MAKE) -C ../../src/libs $(CURVES_LIB_NAME)

clean:
	$(MAKE) -C examples clean
	$(MAKE) -C ../../src/libs clean
	$(MAKE) -C ../../src/examples clean