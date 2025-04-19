@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSString *value;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNameSpace:(id)a0 name:(id)a1 value:(id)a2;

@end
