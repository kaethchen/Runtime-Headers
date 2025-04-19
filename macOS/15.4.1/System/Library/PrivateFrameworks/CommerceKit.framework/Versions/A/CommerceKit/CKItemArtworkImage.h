@class NSString, NSURL;

@interface CKItemArtworkImage : NSObject {
    BOOL _prerendered;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSString *imageKind;
@property (readonly, nonatomic) NSURL *URL;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArtworkDictionary:(id)a0;

@end
