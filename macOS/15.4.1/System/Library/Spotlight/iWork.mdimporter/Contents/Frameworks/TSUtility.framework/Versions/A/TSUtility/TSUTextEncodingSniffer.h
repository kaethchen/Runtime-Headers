@interface TSUTextEncodingSniffer : NSObject {
    unsigned long long _encodingsCount;
    unsigned int *_encodings;
    struct OpaqueTECSnifferObjectRef { } *_sniffer;
}

- (void)dealloc;
- (id)init;
- (id)sniff:(id)a0;

@end
