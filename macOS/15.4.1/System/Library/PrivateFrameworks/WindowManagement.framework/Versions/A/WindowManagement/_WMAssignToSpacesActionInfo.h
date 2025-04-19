@class NSString, NSSet;

@interface _WMAssignToSpacesActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *windowID;
@property (readonly, copy, nonatomic) NSSet *spaceIDs;
@property (readonly, nonatomic) unsigned int removingFromSpacesMatching;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowID:(id)a0 spaces:(id)a1 removingFromSpacesMatching:(unsigned int)a2;

@end
