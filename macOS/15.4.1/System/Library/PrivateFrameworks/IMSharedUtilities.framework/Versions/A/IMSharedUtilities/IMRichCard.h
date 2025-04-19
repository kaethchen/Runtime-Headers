@class NSString;

@interface IMRichCard : NSObject <IMAttributableContent, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ cardDescription;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ layout;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ media;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *cardDescription;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chipList;
@property (nonatomic, retain) void /* unknown type, empty encoding */ urlToTransferMap;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLayout:(id)a0 media:(id)a1 title:(id)a2 cardDescription:(id)a3 chipList:(id)a4;
- (id)relayDictionaryRepresentation;
- (void)updateUrlToTransferMap:(id)a0;

@end
