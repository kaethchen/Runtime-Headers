@class NSString;

@interface AXKonaConfiguration : NSObject

@property (readonly, nonatomic) NSString *dylib;
@property (readonly, nonatomic) NSString *romanizerDylib;
@property (readonly, nonatomic) NSString *dialectCode;
@property (readonly, nonatomic) NSString *iniString;
@property (readonly, nonatomic) int eciDialect;
@property (readonly, nonatomic) unsigned long long encoding;

- (void).cxx_destruct;
- (id)initWithDylib:(id)a0 dialectCode:(id)a1 dialect:(int)a2;
- (id)initWithDylib:(id)a0 romanizerDylib:(id)a1 encoding:(unsigned long long)a2 dialectCode:(id)a3 dialect:(int)a4;

@end
