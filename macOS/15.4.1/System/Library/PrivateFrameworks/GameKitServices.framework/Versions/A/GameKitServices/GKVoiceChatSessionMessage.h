@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage {
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)data;
- (unsigned int)subtype;
- (id)payload;
- (unsigned int)conferenceID;
- (BOOL)_checkSize:(unsigned long long)a0;
- (BOOL)_checkType:(unsigned short)a0;
- (id)initWithPayload:(id)a0 conferenceID:(unsigned int)a1 subtype:(unsigned int)a2;

@end
