/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTexturedPolygonGroup : VKPolygonGroup {
    BOOL _needsTextureUpdate;
    VKSharedResources *_sharedResources;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _texture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureVariant;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<gss::FeatureAttributePair' */ struct *styleAttributes; /* unknown property attribute:  std::__1::allocator<gss::FeatureAttributePair> >=^{FeatureAttributePair}}}} */
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*texture;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*textureVariant;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })_textureForName:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_4_1; unsigned int x_1_4_2; char *x_1_4_3; } x_1_3_1; struct __short { union { unsigned char x_1_5_1; BOOL x_1_5_2; } x_2_4_1; BOOL x_2_4_2[11]; } x_1_3_2; struct __raw { unsigned long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (void)dealloc;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tile:(id)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4 sharedResources:(id)arg5;
- (void)setNeedsTextureUpdate;
- (const struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)styleAttributes;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*)texture;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*)textureVariant;
- (void)updateTextures;
- (void)updateTexturesIfNecessary;

@end
