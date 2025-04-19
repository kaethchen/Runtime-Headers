@class NSString;

@interface IMKDocumentContent : NSObject <NSCopying>

@property (readonly, nonatomic) long long baseElement;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) NSString *text;

+ (id)contentWith:(long long)a0 charactersAfter:(long long)a1 from:(id)a2;
+ (id)contentWith:(long long)a0 charactersBefore:(long long)a1 from:(id)a2;
+ (id)contentWithComposingTextOf:(id)a0;
+ (id)contentWithSelectedTextOf:(id)a0;
+ (id)contentWithUpTo:(long long)a0 charactersAfter:(long long)a1 from:(id)a2 untilCharacterFromSet:(id)a3;
+ (id)contentWithUpTo:(long long)a0 charactersBefore:(long long)a1 from:(id)a2 untilCharacterFromSet:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(long long)a0 direction:(unsigned long long)a1 offset:(unsigned long long)a2 text:(id)a3;

@end
