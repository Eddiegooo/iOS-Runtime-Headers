/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UITableView;

@interface UIMovieChapterListView : UIView  {
    UIImageView *_backgroundImageView;
    unsigned int _pinnedRow;
    UITableView *_table;
    float _topPadding;
}

@property float topPadding;
@property(readonly) UITableView * table;


- (id)table;
- (void)layoutSubviews;
- (id)init;
- (void)pinVisibleRow:(unsigned int)arg1;
- (void)setTopPadding:(float)arg1;
- (float)topPadding;

@end