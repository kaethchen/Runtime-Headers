@interface _CFRemotePasteboardCache : _CFPasteboardCache

@property (readonly) int state;

- (void)prepareMetadata;
- (void)notifyRemotePateboardBecameAvailable:(unsigned char)a0 localGeneration:(long long)a1;
- (void)prepareDataForItemIdentifier:(long long)a0 flavor:(struct __CFString { } *)a1;

@end
