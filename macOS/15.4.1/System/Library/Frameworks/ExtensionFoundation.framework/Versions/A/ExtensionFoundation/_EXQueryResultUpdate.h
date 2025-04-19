@class NSSet, NSString;

@interface _EXQueryResultUpdate : _EXQueryResult {
    void /* unknown type, empty encoding */ removedUUIDs;
}

@property (nonatomic, readonly) NSSet *removedUUIDs;
@property (nonatomic, readonly) NSSet *addedExtensions;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentities:(id)a0;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;
- (id)initWithAvailablility:(id)a0;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;

@end
