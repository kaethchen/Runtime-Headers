@class NSNumber, NSString;

@interface AMSUIWebFetchCardMetadataAction : AMSUIWebAction

@property (retain) NSNumber *cardArtworkSize;
@property (retain) NSString *passTypeIdentifier;
@property (retain) NSString *serialNumber;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
