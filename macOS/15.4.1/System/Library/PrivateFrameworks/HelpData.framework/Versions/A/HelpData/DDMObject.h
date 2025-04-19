@class NSURL, NSString, NSObject;
@protocol OS_os_log;

@interface DDMObject : NSObject <HPDLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) NSURL *originURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDDMDictionary:(id)a0 originURL:(id)a1;

- (void).cxx_destruct;
- (id)_initWithDDMDictionary:(id)a0 originURL:(id)a1;
- (id)_makeTreeFromArray:(id)a0 withDescription:(id)a1 topLevelItemIDs:(id)a2;
- (BOOL)_mapAttributeName:(id)a0 fromDDMDictionary:(id)a1 attributeDescription:(id)a2 originURL:(id)a3;
- (id)ddmObjectIdentifier;
- (id)jsonModelObjectMap;

@end
