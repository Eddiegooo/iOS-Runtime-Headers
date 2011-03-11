/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, NSColorStub;

@interface EMBordersProperty : CMProperty <NSCopying> {
    EDBorders *edValue;
    NSColorStub *mBorderColor;
    NSColorStub *mBorderTopColor;
    NSColorStub *mBorderLeftColor;
    NSColorStub *mBorderBottomColor;
    NSColorStub *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}


- (id)styleString;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithEDBorders:(id)arg1;
- (id)initWithOADStroke:(id)arg1;
- (id)borderColor;
- (int*)borderStyles;
- (int*)borderWidths;
- (void)setNoneAtLocation:(int)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;
- (BOOL)hasSameStylesAs:(id)arg1;
- (BOOL)hasSameWidthsAs:(id)arg1;
- (BOOL)hasSameColorsAs:(id)arg1;
- (id)styleHashNumber;
- (id)widthHashNumber;
- (BOOL)isNoneAtLocation:(int)arg1;
- (id)cssString;
- (id)stringFromStyleEnum:(int)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)widthString;
- (id)colorString;
- (id)cssStringForName:(id)arg1;

@end