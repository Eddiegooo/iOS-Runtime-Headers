/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISectionRowData : NSObject <NSCopying> {
    BOOL _valid;
    float _headerHeight;
    float _maxHeaderTitleWidth;
    float _footerHeight;
    float _maxFooterTitleWidth;
    float _headerOffset;
    float _footerOffset;
    int _numRows;
    int _arrayLength;
    float *_rowHeights;
    float *_rowOffsets;
    float _sectionHeight;
    int _headerAlignment;
    int _footerAlignment;
    BOOL _sectionOffsetValid;
    float _sectionOffset;
    int _sectionRowOffset;
}


- (void)invalidateSectionOffset;
- (float)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 isHeader:(BOOL)arg3;
- (void)addOffset:(float)arg1 fromRow:(int)arg2;
- (void)setHeight:(float)arg1 forRow:(int)arg2;
- (float)_defaultSectionHeaderHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_defaultSectionFooterHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (void)refreshWithSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (void)insertRowAtIndex:(int)arg1 inSection:(int)arg2 rowHeight:(float)arg3 tableViewRowData:(id)arg4;
- (void)deleteRowAtIndex:(int)arg1;
- (int)sectionLocationForRow:(int)arg1;
- (int)sectionLocationForReorderedRow:(int)arg1;
- (void)invalidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end