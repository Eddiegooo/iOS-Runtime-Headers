/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView  {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    float _lineWidth;
    int _lineJoin;
    int _lineCap;
    float _miterLimit;
    float _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath { } *_path;
}

@property struct CGPath { }* path;
@property(copy) NSArray * lineDashPattern;
@property float lineDashPhase;
@property float miterLimit;
@property int lineCap;
@property int lineJoin;
@property float lineWidth;
@property(retain) UIColor * strokeColor;
@property(retain) UIColor * fillColor;


- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (struct CGPath { }*)path;
- (void)dealloc;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg1;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (void)createPath;
- (void)setPath:(struct CGPath { }*)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineDashPhase:(float)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)invalidatePath;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (float)lineDashPhase;
- (int)lineJoin;
- (int)lineCap;
- (id)lineDashPattern;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;

@end