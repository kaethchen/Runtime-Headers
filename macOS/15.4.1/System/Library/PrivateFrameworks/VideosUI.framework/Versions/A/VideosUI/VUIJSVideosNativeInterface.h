@class NSString;

@interface VUIJSVideosNativeInterface : VUIJSObject <VUIJSVideosNativeInterface>

@property (readonly, nonatomic) NSString *language;

- (id)generateHash:(id)a0;
- (id)locStringForKey:(id)a0;
- (id)locStringForKeyWithCounts:(id)a0 :(id)a1;
- (void)setLocDictionary:(id)a0;

@end
