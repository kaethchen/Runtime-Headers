@class NSString;

@interface AAPPlistEntryInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) SEL setter;
@property (nonatomic) void /* function */ *parser;
@property (copy, nonatomic) id /* block */ defaultGenerator;
@property (copy, nonatomic) id /* block */ postProcessor;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 setter:(SEL)a1 parser:(void /* function */ *)a2 defaultGenerator:(id /* block */)a3 postProcessor:(id /* block */)a4;

@end
