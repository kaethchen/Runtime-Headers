@class NSString, NSArray, NSNumber;

@interface GDKnosisRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *kgq;
@property (readonly, copy, nonatomic) NSArray *intentArgs;
@property (readonly, copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) BOOL enableDebug;
@property (readonly, nonatomic) BOOL enableTextualization;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKGQ:(id)a0 query:(id)a1 limit:(id)a2 offset:(id)a3;
- (id)initWithKGQ:(id)a0 query:(id)a1 limit:(id)a2 offset:(id)a3 enableDebug:(BOOL)a4;
- (id)initWithIntents:(id)a0 query:(id)a1 limit:(id)a2 offset:(id)a3;
- (id)initWithIntents:(id)a0 query:(id)a1 limit:(id)a2 offset:(id)a3 enableDebug:(BOOL)a4;
- (id)initWithKGQ:(id)a0 query:(id)a1 limit:(id)a2 offset:(id)a3 enableDebug:(BOOL)a4 enableTextualization:(BOOL)a5;

@end
