@class NSString, NSURL;

@interface SGTABPerson : NSObject {
    NSURL *url;
}

@property (readonly) NSString *uniqueId;
@property (readonly, copy) NSURL *URLToPerson;

+ (id)personWithPerson:(id)a0;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (id)initWithUniqueId:(id)a0;
- (id)personWithAddressBook:(id)a0;

@end
