@class NSData;

@interface APSigningRequest : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)createForData:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;

@end
