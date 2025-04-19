@interface IMDRelayUtilities : NSObject

+ (id)_chipListDictionary:(id)a0;
+ (id)_plainTextDictionaryFromMessage:(id)a0;
+ (id)_richCardsDictionary:(id)a0;
+ (id)loadDataForTransfer:(id)a0;
+ (id)plainTextRelayPartWithString:(id)a0 index:(long long)a1;
+ (id)relayPartsFor:(id)a0 overridingAttachmentData:(id)a1;

@end
