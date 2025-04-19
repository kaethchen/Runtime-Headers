@class NSString, NSArray;

@interface _CLMicroLocationSourceIdAndSourceData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdsIdentifier;
@property (readonly, copy, nonatomic) NSArray *sourceData;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceIdsIdentifier:(id)a0 sourceData:(id)a1;

@end
