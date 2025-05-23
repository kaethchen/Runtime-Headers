@class NSString, NSDate;

@interface ATXExecutableReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL shouldClearOnEngagement;
@property (nonatomic) BOOL shouldPurge;
@property (nonatomic) BOOL suggestionIsHidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithClientModelId:(id)a0 date:(id)a1 shouldClearOnEngagement:(BOOL)a2;
- (id)initWithClientModelId:(id)a0 date:(id)a1 shouldClearOnEngagement:(BOOL)a2 shouldPurge:(BOOL)a3 suggestionIsHidden:(BOOL)a4;
- (void)updateDateTo:(id)a0;

@end
