// Remove invalid Windows.UI.Composition Visual tab focus APIs
// The following APIs do not exist on Visual:
//   IsTabStop
//   TabFocusNavigation
//   TabFocusNavigationMode::Once/Cycle
// Remove or replace any usage of these in the header file.
// (Remove lines 177-182)
