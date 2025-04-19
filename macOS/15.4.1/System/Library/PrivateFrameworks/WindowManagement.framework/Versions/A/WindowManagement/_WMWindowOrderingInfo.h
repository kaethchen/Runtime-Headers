@class NSString;

@interface _WMWindowOrderingInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *windowID;
@property (nonatomic) unsigned long long relativePosition;
@property (copy, nonatomic) NSString *otherWindowID;
@property (nonatomic, setter=setCGOtherWindowID:) unsigned int cgOtherWindowID;
@property (nonatomic) unsigned long long preferredPresentationStyle;
@property (copy, nonatomic) NSString *requestingWindowID;
@property (nonatomic) unsigned long long conditionalEventTime;

+ (id)infoWithWindow:(id)a0 positioned:(unsigned long long)a1 relativeTo:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
