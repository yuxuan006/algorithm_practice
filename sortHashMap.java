
import java.util.*;
public class HelloWorld{
    
    public static void main(String []args){
        Map<String, Integer> unsortMap = new HashMap<String, Integer>();
        unsortMap.put("z", 10);
        unsortMap.put("b", 5);
        unsortMap.put("a", 6);
        unsortMap.put("c", 20);
        unsortMap.put("d", 1);
        unsortMap.put("e", 7);
        unsortMap.put("y", 8);
        unsortMap.put("n", 99);
        unsortMap.put("j", 50);
        unsortMap.put("m", 2);
        unsortMap.put("f", 9);
        
        System.out.println("Unsort Map......");
        printMap(unsortMap);
        
        System.out.println("\nSorted Map......");
        Map<String, Integer> sortedMap = sortByComparator(unsortMap);
        printMap(sortedMap);
    }
    private static Map<String, Integer> sortByComparator(Map<String, Integer> unsortMap) {
        
        // Convert Map to List
        List<Map.Entry<String, Integer>> list =
        new LinkedList<Map.Entry<String, Integer>>(unsortMap.entrySet());
        
        // Sort list with comparator, to compare the Map values
        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            public int compare(Map.Entry<String, Integer> o1,
                               Map.Entry<String, Integer> o2) {
                return (o2.getValue()).compareTo(o1.getValue());
            }
        });
        
        // Convert sorted map back to a Map
        Map<String, Integer> sortedMap = new LinkedHashMap<String, Integer>();
        for (Iterator<Map.Entry<String, Integer>> it = list.iterator(); it.hasNext();) {
            Map.Entry<String, Integer> entry = it.next();
            sortedMap.put(entry.getKey(), entry.getValue());
        }
        return sortedMap;
    }
    
    public static void printMap(Map<String, Integer> map) {
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            System.out.println("[Key] : " + entry.getKey() 
                               + " [Value] : " + entry.getValue());
        }
    }
}

public class HelloWorld{
    
    public static void main(String []args){
        
        Map<String, Integer> treemap =
        new TreeMap<String, Integer>(Collections.reverseOrder());
        
        // Put elements to the map
        treemap.put("Key1", 43);
        treemap.put("Key2",44);
        treemap.put("Key3", 45);
        treemap.put("Key4", 46);
        treemap.put("Key5", 47);
        
        Set set = treemap.entrySet();
        Iterator i = set.iterator();
        // Display elements
        while(i.hasNext()) {
            Map.Entry me = (Map.Entry)i.next();
            System.out.print(me.getKey() + ": ");
            System.out.println(me.getValue());
        }
    }
}
