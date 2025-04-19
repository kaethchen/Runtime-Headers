@class NSString, NSDictionary, NSData, NSNumber;

@interface SFDomainEngagementScore : NSObject <SFDomainEngagementScore, NSSecureCoding, NSCopying> {
    struct { unsigned char domain : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int domain;
@property (copy, nonatomic) NSNumber *scoreConfidence;
@property (copy, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSNumber *iFunScore;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasDomain;
- (id)initWithProtobuf:(id)a0;
- (id)initWithDomain:(int)a0 scoreConfidence:(id)a1 score:(id)a2;

@end
