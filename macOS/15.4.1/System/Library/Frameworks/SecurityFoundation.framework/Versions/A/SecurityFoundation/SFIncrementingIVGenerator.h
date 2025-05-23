@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {
    id _incrementingIVGeneratorInternal;
}

@property (copy, nonatomic) NSData *messageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generateIVWithLength:(long long)a0 error:(id *)a1;
- (id)initWithMessageID:(id)a0;
- (id)initWithRandomMessageID;

@end
