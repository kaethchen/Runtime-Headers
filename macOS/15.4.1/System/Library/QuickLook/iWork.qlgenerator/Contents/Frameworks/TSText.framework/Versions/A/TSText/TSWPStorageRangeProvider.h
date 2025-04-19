@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject *object;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (unsigned long long)rangeEnd;
- (void)nextRange;
- (void)setRangeStart:(unsigned long long)a0;

@end
