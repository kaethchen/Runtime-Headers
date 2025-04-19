@class NSError, NSString, AMPArtworkSourceInfo;

@interface AMPSetArtworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMPArtworkSourceInfo *info;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long imageDataHash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
