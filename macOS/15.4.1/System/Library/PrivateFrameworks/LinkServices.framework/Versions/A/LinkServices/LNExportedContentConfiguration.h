@class LNContentType;

@interface LNExportedContentConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) LNContentType *contentType;
@property (readonly, nonatomic) long long preferredExtractionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentType:(id)a0 preferredExtractionType:(long long)a1;
- (id)configurationWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithContentType:(id)a0 preferredExtractionType:(long long)a1 auditToken:(struct { unsigned int x0[8]; })a2;

@end
