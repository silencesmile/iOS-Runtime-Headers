/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    float  _currentRowFinalHeight;
    float  _currentRowUnmodifiedHeight;
    struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; } * _geometries;
    unsigned int  _geometriesCount;
    int  _lastGeometryIndex;
}

@property (nonatomic, readonly, copy) PXAspectFitLayoutMetrics *metrics;

- (void)_computeGeometriesIfNeeded;
- (void)_fillRowFromIndex:(int*)arg1 withCount:(int)arg2;
- (struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; })_geometryForItemAtIndex:(unsigned int)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 withHorizontalGap:(float)arg3;
- (struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; })_lastGeometry;
- (void)_prepareGeometriesForCount:(unsigned int)arg1;
- (float)_rowHeightForItemsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; }*)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withKind:(int)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (struct CGSize { float x1; float x2; })size;

@end
