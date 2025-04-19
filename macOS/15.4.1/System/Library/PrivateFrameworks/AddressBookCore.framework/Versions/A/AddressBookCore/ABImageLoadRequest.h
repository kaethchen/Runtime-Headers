@class NSString, NSArray, NSData;

@interface ABImageLoadRequest : NSObject

@property (readonly, copy) NSString *primaryImagePath;
@property (readonly, copy) NSString *contactIdentifier;
@property (copy) NSArray *emailAddresses;
@property (readonly) BOOL isMe;
@property (readonly) int searchLocations;
@property (readonly, copy) NSData *imageData;
@property (readonly, copy) NSData *thumbnailImageData;

+ (id)requestWithAddressBookPerson:(id)a0;
+ (id)requestWithCoreDataContact:(id)a0 addressBook:(id)a1;

- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2 isMe:(BOOL)a3 imageData:(id)a4 thumbnailImageData:(id)a5;
- (void)logDebugInfoWithName:(id)a0;

@end
