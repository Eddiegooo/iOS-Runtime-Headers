/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKObjectBoundsContext : NSObject {
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
        struct Matrix<double, 2, 1> {} *__begin_; 
        struct Matrix<double, 2, 1> {} *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
            struct Matrix<double, 2, 1> {} *__first_; 
        } __end_cap_; 
    } _points;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(const struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_1_1; } x3; }*)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (BOOL)isEmpty;

@end
