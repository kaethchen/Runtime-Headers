@class NSString, ICQLink, NSDictionary;

@interface _ICQButtonSpecification : NSObject {
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
}

@property (readonly, nonatomic) NSString *buttonFormat;
@property (readonly, nonatomic) ICQLink *buttonLink;
@property (readonly, nonatomic) NSString *textFormat;
@property (readonly, nonatomic) NSString *linkFormat;
@property (retain, nonatomic) NSDictionary *linkForBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (id)linkForBundleIdentifier:(id)a0;

@end
