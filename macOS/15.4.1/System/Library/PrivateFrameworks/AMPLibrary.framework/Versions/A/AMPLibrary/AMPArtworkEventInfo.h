@class NSString, NSArray;

@interface AMPArtworkEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dbID;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int kind;
@property (retain, nonatomic) NSArray *persistentIDs;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long imageDataHash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
