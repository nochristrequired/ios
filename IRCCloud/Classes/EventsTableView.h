//
//  EventsTableView.h
//  IRCCloud
//
//  Created by Sam Steele on 2/25/13.
//  Copyright (c) 2013 IRCCloud, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BuffersDataSource.h"
#import "EventsDataSource.h"
#import "CollapsedEvents.h"

@interface EventsTableView : UITableViewController {
    NSDateFormatter *_formatter;
    NSMutableArray *_data;
    NSMutableDictionary *_expandedSectionEids;
    Buffer *_buffer;
    CollapsedEvents *_collapsedEvents;
    
    NSTimeInterval _maxEid, _minEid, _currentCollapsedEid, _earliestEid;
    int _currentGroupPosition;
    NSString *_lastCollpasedDay;
}
-(void)insertEvent:(Event *)event backlog:(BOOL)backlog nextIsGrouped:(BOOL)nextIsGrouped;
-(void)setBuffer:(Buffer *)buffer;
@end
