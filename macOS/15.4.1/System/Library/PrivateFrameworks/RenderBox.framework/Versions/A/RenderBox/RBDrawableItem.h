@class RBDisplayList;
@protocol RBDisplayListContents;

@interface RBDrawableItem : NSObject {
    struct objc_ptr<RBDisplayList *> { RBDisplayList *_p; } _list;
}

@property (retain, nonatomic) id<RBDisplayListContents> displayList;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } sourceRect;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } destinationOffset;
@property (nonatomic) int initialState;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
