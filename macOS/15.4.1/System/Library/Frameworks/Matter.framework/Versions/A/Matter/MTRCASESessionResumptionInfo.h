@class NSNumber, NSData, NSSet;

@interface MTRCASESessionResumptionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) NSData *resumptionID;
@property (retain, nonatomic) NSData *sharedSecret;
@property (retain, nonatomic) NSSet *caseAuthenticatedTags;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
