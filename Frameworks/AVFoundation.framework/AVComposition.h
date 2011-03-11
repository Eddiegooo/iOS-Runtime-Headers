/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property(readonly) NSArray * tracks;

+ (void)initialize;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })naturalSize;
- (long)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_mutableTracks;
- (void)_setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long)arg1;
- (id)tracks;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_assetInspector;

@end