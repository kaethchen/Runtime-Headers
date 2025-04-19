@class NSArray, _NSTextPlaceholderAttachment;

@interface NSTextPlaceholder : NSObject {
    id _owner;
    id _internal;
    id _attachment;
    struct _NSRange { unsigned long long location; unsigned long long length; } _placeholderRange;
    NSArray *_rects;
}

@property (readonly, nonatomic) NSArray *rects;
@property (retain, nonatomic) _NSTextPlaceholderAttachment *attachment;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } placeholderRange;
@property id owner;
@property (readonly) id attributedStringValue;
@property (readonly) BOOL committed;

- (void)dealloc;
- (id)identifier;
- (void)setOwner:(id)a0;
- (void)commit;
- (id)owner;
- (void)_postCommitNotification;
- (id)initWithIdentifier:(id)a0 text:(id)a1 doCommit:(BOOL)a2;
- (void)setRects:(id)a0;
- (void)setText:(id)a0 doCommit:(BOOL)a1;

@end
