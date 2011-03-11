/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISectionTable;

@interface UISectionIndex : UIControl  {
    UISectionTable *_sectionTable;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastMousePoint;
}

+ (float)visibleWidth;
+ (float)opaqueVisibleWidth;

- (id)_sectionTitles;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (id)_titleForPoint:(struct CGPoint { float x1; float x2; })arg1 pastTop:(BOOL*)arg2 pastBottom:(BOOL*)arg3;
- (void)_scrollToClosestSectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (id)initWithSectionTable:(id)arg1;
- (void)noteIndexTitlesDidChangeInSectionList:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end