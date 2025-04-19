@interface FI_TTagsImageView : FI_TImageView {
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _tags;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })tags;
- (BOOL)isSelected;
- (void)setTags:(const void *)a0;
- (void)initCommon;
- (void)updateTagsImage;

@end
