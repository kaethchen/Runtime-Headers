@class NSUUID, NSMutableDictionary, NSURL, NSData, NSString, NSDictionary;

@interface APHTTPRequest : NSObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) long long HTTPMethod;
@property (retain, nonatomic) NSMutableDictionary *internalHTTPHeaderFields;
@property (retain, nonatomic) NSData *HTTPBody;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 HTTPMethod:(long long)a1 HTTPHeaders:(id)a2 HTTPBody:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithURL:(id)a0 HTTPMethod:(long long)a1 HTTPHeaders:(id)a2 HTTPBody:(id)a3 serviceName:(id)a4 completionHandler:(id /* block */)a5;
- (void)setRequestHeader:(id)a0 withValue:(id)a1;

@end
