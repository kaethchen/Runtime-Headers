@class NSNumber, NSURL;

@interface ISFetchIconOperation : ISOperation {
    NSURL *_remoteURL;
    NSURL *_localURL;
}

@property (readonly) NSNumber *productID;
@property (readonly) NSURL *iconURL;

- (void)run;
- (void).cxx_destruct;
- (id)initWithProductID:(id)a0 url:(id)a1 storeClient:(id)a2;

@end
