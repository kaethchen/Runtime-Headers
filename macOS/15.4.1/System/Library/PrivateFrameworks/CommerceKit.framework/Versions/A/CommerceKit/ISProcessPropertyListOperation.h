@class NSString, ISPropertyListProvider, NSDictionary, NSURL;

@interface ISProcessPropertyListOperation : ISOperation <ISURLOperationDelegate> {
    NSDictionary *_propertyList;
    NSURL *_propertyListURL;
    id /* block */ _preParserBlock;
}

@property (retain) ISPropertyListProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (id)initWithStoreClient:(id)a0;
- (id)initWithPropertyList:(id)a0 storeClient:(id)a1;
- (id)initWithPropertyListAtURL:(id)a0 withPreParserBlock:(id /* block */)a1 storeClient:(id)a2;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;

@end
