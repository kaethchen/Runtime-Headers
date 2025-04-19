@class NSString, NSArray;

@interface GDKnosisAnswer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *answerId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *textualization;
@property (readonly, copy, nonatomic) NSArray *facts;
@property (readonly, copy, nonatomic) NSArray *parents;
@property (readonly, copy, nonatomic) NSArray *requestIds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnswerId:(id)a0 name:(id)a1 textualization:(id)a2 facts:(id)a3 parents:(id)a4 requestIds:(id)a5;

@end
