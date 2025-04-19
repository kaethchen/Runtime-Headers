@class NSArray;

@interface NSTouchBarInputMethodCandidateList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long listType;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) unsigned long long numberOfFixedWidthCandidates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidates:(id)a0 listType:(long long)a1;

@end
