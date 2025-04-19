@class ATXHeuristicDevice;

@interface ATXBestTimeToInteractWithContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)a0 callback:(id /* block */)a1;

@end
