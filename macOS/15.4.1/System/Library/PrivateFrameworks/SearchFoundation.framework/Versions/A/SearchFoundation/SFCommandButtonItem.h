@class SFButtonItemAppearance, NSString, NSArray, SFCommand, NSDictionary, SFImage, NSData;

@interface SFCommandButtonItem : SFButtonItem <SFCommandButtonItem, NSSecureCoding, NSCopying> {
    struct { unsigned char isDestructive : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFCommand *command;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (nonatomic) BOOL isDestructive;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
