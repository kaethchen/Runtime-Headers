@class NSString, PXSItem;

@interface _PXSItemTextToken : NSObject

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) PXSItem *item;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } effectiveRange;

- (id)description;
- (void).cxx_destruct;

@end
