@class NSString;

@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSString *clientModelVersion;
@property (readonly, nonatomic) unsigned long long engagementResetPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1 engagementResetPolicy:(unsigned long long)a2;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1;
- (id)jsonRawData;
- (BOOL)fuzzyIsEqualToClientModelSpecification:(id)a0;

@end
